reg_t msg_size = p->pb.msg_size;
uint8_t victim_message[msg_size];
memcpy(victim_message, p->pb.victim_msg, msg_size);
std::string cmd = construct_sdecc_candidate_messages_cmd(MMU.candidates_sdecc_script_filename, victim_message, msg_size, MMU.ncodewordbits, MMU.code_type);
std::cout << cmd << std::endl; //TEMP
std::string output = myexec(cmd);
std::cout << output << std::endl; //TEMP
const char* output_cstr = output.c_str();
MMU.store_slow_path(RS1, output.length()+1, (const uint8_t*)output_cstr, 0);
