/* Ghidra address: 017708f0 */
/* Ghidra symbol: FUN_017708f0 */


undefined ** FUN_017708f0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  undefined8 local_54 [6];
  undefined **local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_60 = auStack_98;
  FUN_00417580(local_54,&DAT_01d2e6d8);
  local_20 = (undefined **)0x0;
  local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,param_1,0x20);
  local_78 = 0;
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
  if (local_10 != 0) {
    iVar1 = FUN_01d31a40(local_10);
    if (iVar1 == 0) {
      FUN_01d317c0(local_10,local_54);
      iVar1 = FUN_00416db0(local_54[0],L"Schematics Macro");
      if (iVar1 == 0) {
        local_20 = &PTR_FUN_017611c0;
      }
      else {
        iVar1 = FUN_00416db0(local_54[0],L"Spice Macro");
        if (iVar1 == 0) {
          local_20 = &PTR_FUN_01761b48;
        }
        else {
          iVar1 = FUN_00416db0(local_54[0],L"VHDL Macro");
          if (iVar1 == 0) {
            local_20 = &PTR_FUN_01763148;
          }
          else {
            iVar1 = FUN_00416db0(local_54[0],L"VerilogAMS Macro");
            if (iVar1 == 0) {
              local_20 = &PTR_FUN_017649b8;
            }
            else {
              local_20 = (undefined **)0x0;
            }
          }
        }
      }
      goto code_r0x01770a55;
    }
  }
  if (*(int *)PTR_DAT_02004810 == 0x1001) {
    FUN_00b047e0(0xfffffffd);
  }
  else {
    FUN_00b047e0(*(undefined4 *)PTR_DAT_02004810);
  }
code_r0x01770a55:
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00417740(local_54,&DAT_01d2e6d8);
  return local_20;
}

