require_extension('C');
if (xlen == 32) {
  require_extension('F');
  require_fp;
  MMU.store_uint32(RVC_RS1S + insn.rvc_lw_imm(), RVC_FRS2S, true); //MWG
} else { // c.sd
  MMU.store_uint64(RVC_RS1S + insn.rvc_ld_imm(), RVC_RS2S, false); //MWG
}
