/* Ghidra address: 010c0090 */
/* Ghidra symbol: FUN_010c0090 */


void FUN_010c0090(byte *param_1,undefined1 *param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  undefined1 local_28 [16];
  
  local_38 = 0;
  local_40 = 0;
  *param_2 = 0;
  FUN_00b909e0(local_28,param_3);
  pbVar4 = param_1;
  iVar2 = FUN_00416fd0(local_28,param_1,1);
  if (0 < iVar2) {
    FUN_00b909e0(local_28,param_3);
    FUN_00414ff0(param_2,local_28);
    pbVar4 = (byte *)0x0;
    FUN_00415260(param_1,0xff,iVar2,0x50);
  }
  bVar1 = *param_1;
  bVar3 = param_1[bVar1] - 0x30;
  if (bVar3 < 0x10) {
    bVar5 = ((int)CONCAT62((int6)((ulonglong)pbVar4 >> 0x10),1) << (bVar3 & 0x1f) & 0x3ffU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    local_30 = 1;
    local_2f = param_1[bVar1];
    FUN_004154b0(&local_38,&local_30,0);
    FUN_004154b0(&local_40,param_2,0);
    FUN_004155b0(&local_38,local_40);
    FUN_00415560(param_2,local_38,0xff);
    FUN_00415260(param_1,0xff,bVar1,0x50);
  }
  FUN_00414590(&local_40,2);
  return;
}

