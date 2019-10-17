/*

static void pthread_rwlock_init(&p_file_space->rwlock)
{
	//if(0 == p_file_space->init_flag)
	if(1 != p_file_space->init_flag)
	{
		pthread_rwlock_init(&p_file_space->rwlock, NULL);

		p_file_space->init_flag = 1;
	}
}

static void pthread_rwlock_destroy(FileSpaceNode *p_file_space)
{
	if(1 == p_file_space->init_flag)
	{
		pthread_rwlock_destroy(&p_file_space->rwlock);

		p_file_space->init_flag = 0;
	}

}

static void pthread_rwlock_init(TableSpaceNode *p_table_space)
{
	//if(0 == p_table_space->init_flag)
	if(1 != p_table_space->init_flag)
	{
		pthread_rwlock_init(&p_table_space->rwlock, NULL);

		p_table_space->init_flag = 1;
	}
}

static void pthread_rwlock_destroy(TableSpaceNode *p_table_space)
{
	if(1 == p_table_space->init_flag)
	{
		pthread_rwlock_destroy(&p_table_space->rwlock);

		p_table_space->init_flag = 0;
	}
}
*/








