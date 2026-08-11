/* Ghidra address: 00d57170 */
/* Ghidra symbol: FUN_00d57170 */


undefined8 * FUN_00d57170(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(param_1);
  FUN_00414b50(&local_20,*param_2);
  cVar3 = '\0';
  if (local_20 != 0) {
    cVar3 = (char)*(undefined4 *)(local_20 + -4);
  }
  bVar2 = 1;
  for (; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    FUN_00416e20(param_2,1,1);
    uVar1 = *(ushort *)(local_20 + -2 + (ulonglong)bVar2 * 2);
    if (uVar1 < 0x100) {
      bVar4 = ((byte)(&DAT_00d572dc)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    FUN_00416780(local_30,uVar1);
    FUN_00416ad0(param_1,local_30[0]);
    bVar2 = bVar2 + 1;
  }
  FUN_0043ea00(&local_38,*param_1);
  FUN_00414ad0(param_1,local_38);
  FUN_0043ea00(&local_40,*param_2);
  FUN_00414ad0(param_2,local_40);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  return param_1;
}

