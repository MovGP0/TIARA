/* Ghidra address: 00af18a0 */
/* Ghidra symbol: FUN_00af18a0 */


void FUN_00af18a0(longlong param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  local_18 = 0;
  cVar1 = FUN_00af2f30(param_1);
  if ((cVar1 == '\0') && (param_3 != 0)) {
    uVar2 = FUN_004b6dc0(param_3,0);
    if (param_4 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_4 & 0x1f) & 0xbU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = FUN_00a01b30(&PTR_FUN_009f2d50,1,param_3,param_2);
      FUN_00af0d00(param_1,uVar2,param_2,param_4);
    }
    else {
      *(longlong *)(param_1 + 0x960) = param_3;
      local_28 = &LAB_00af1a3c;
      FUN_00416cd0(&local_18,3,L"<img src=\"",param_2);
      local_28 = (undefined1 *)CONCAT44(local_28._4_4_,0x4b0);
      uVar2 = FUN_00a01d40(&PTR_FUN_009f2d50,1,local_18,0);
      FUN_00af0d00(param_1,uVar2,param_2,0);
      *(undefined8 *)(param_1 + 0x960) = 0;
    }
  }
  FUN_00414480(&local_18);
  return;
}

