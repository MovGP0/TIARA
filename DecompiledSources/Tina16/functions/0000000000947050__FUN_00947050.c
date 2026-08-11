/* Ghidra address: 00947050 */
/* Ghidra symbol: FUN_00947050 */


undefined8 FUN_00947050(undefined8 param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  uint local_2c;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00414520(param_1);
  local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_2c = 0;
  if (param_2 != 0) {
    local_2c = *(uint *)(param_2 + -4) >> 1;
  }
  local_24 = 1;
  for (uVar2 = local_2c; uVar2 != 0; uVar2 = uVar2 - 1) {
    sVar1 = *(short *)(param_2 + -2 + (longlong)local_24 * 2);
    if (sVar1 == 0x22) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&#34;");
    }
    else if (sVar1 == 0x27) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&#39;");
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,sVar1);
    }
    local_24 = local_24 + 1;
  }
  (**(code **)(*local_20 + 0x48))(local_20,param_1);
  FUN_00410f20(local_20);
  return param_1;
}

