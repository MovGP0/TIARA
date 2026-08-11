/* Ghidra address: 01a0c930 */
/* Ghidra symbol: FUN_01a0c930 */


undefined1 FUN_01a0c930(longlong param_1,short param_2,undefined8 param_3,byte *param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_71;
  undefined8 local_70;
  undefined1 local_68 [78];
  undefined1 local_1a;
  byte local_19 [9];
  
  local_70 = 0;
  local_71 = 1;
  uVar3 = 0;
  lVar2 = FUN_01cfde70(param_3,1,0,local_19,&local_1a,param_4);
  if (param_2 == 0xb) {
    bVar1 = 1 < *param_4;
  }
  else if (param_2 == 0xf) {
    bVar1 = 3 < *param_4;
  }
  else {
    bVar1 = 8 < *param_4;
  }
  if (local_19[0] < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (local_19[0] & 0x1f) & 0x90U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (((bool)(bVar1 & bVar4)) && (*(char *)(param_1 + 0xc2) == '\0')) {
    FUN_00414ff0(local_68,&DAT_01a0ca79);
    FUN_00415110(local_68,lVar2 + 0x15,0x3f);
    FUN_004169a0(&local_70,local_68);
    FUN_016fd940(local_70);
    local_71 = 0;
    *(undefined1 *)(param_1 + 0xc2) = 1;
  }
  FUN_00414480(&local_70);
  return local_71;
}

