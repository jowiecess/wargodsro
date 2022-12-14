// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config structure
 * Place the definition of custom battle configuration structure members in this file.
 *
 * Make sure that the name you want is not already taken by looking into battle.hpp
 * Do not forget to add initilization logic to battle_config_init.inc
 *
 * Format:
 *	 <datatype> name;
 **/

	int afk_timeout;
	int bg_idle_announce;
	int bg_idle_autokick;
	int bg_reportafk_leaderonly;
	int bg_queue2team_balanced;
	int bg_reward_rates;
	int bg_queue_onlytowns;
	int bg_order_behavior;
	int bg_eAmod_mode;
	int bg_reserved_char_id;
	int woe_reserved_char_id;
	int bg_can_trade;
	int bg_double_login;