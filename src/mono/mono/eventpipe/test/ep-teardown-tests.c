#include "mono/eventpipe/ep.h"
#include "eglib/test/test.h"
#include <mono/mini/jit.h>

#define TEST_FILE "./ep_test_create_file.txt"

extern MonoDomain *eventpipe_test_domain;

static RESULT
test_teardown (void)
{
	if (eventpipe_test_domain)
		mono_jit_cleanup (eventpipe_test_domain);

	unlink (TEST_FILE);

	return NULL;
}

static Test ep_teardown_tests [] = {
	{"test_teardown", test_teardown},
	{NULL, NULL}
};

DEFINE_TEST_GROUP_INIT(ep_teardown_tests_init, ep_teardown_tests)
