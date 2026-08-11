/* Ghidra address: 019a7350 */
/* Ghidra symbol: FUN_019a7350 */


undefined8 * FUN_019a7350(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = FUN_0198a580(param_3);
  if (cVar1 == '\x05') {
    FUN_00414ad0(param_2,L"Wire/Bus");
  }
  else {
    uVar2 = FUN_0198a580(param_3);
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1eU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_01d03640(param_3,param_2,*(undefined8 *)(param_1 + 0x450));
      (**(code **)(*param_3 + 0x288))(param_3,local_20);
      if (local_20[0] != 0) {
        FUN_01b20020(&local_28,param_3,&DAT_019a74b8);
        FUN_00416cd0(param_2,3,*param_2,&DAT_019a74a8,local_28);
      }
    }
    else {
      FUN_00414ad0(param_2,L"component");
    }
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

