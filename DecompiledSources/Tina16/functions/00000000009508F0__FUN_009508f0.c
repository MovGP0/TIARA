/* Ghidra address: 009508f0 */
/* Ghidra symbol: FUN_009508f0 */


undefined8 FUN_009508f0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_30 [2];
  byte local_19;
  
  local_30[0] = 0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
  (**(code **)(*param_1 + 0x160))(param_1,local_30);
  uVar1 = FUN_00950640(param_1);
  uVar3 = FUN_00414520(param_2);
  (**(code **)(*plVar2 + 0x2b8))(plVar2,local_30[0],uVar1,uVar3,&local_19);
  if (local_19 < 0xa0) {
    bVar4 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_19 >> 3] >> (local_19 & 7) & 1) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"Attribute value normalization failed.");
    FUN_004134c0(uVar3);
  }
  FUN_00414520(local_30);
  return param_2;
}

