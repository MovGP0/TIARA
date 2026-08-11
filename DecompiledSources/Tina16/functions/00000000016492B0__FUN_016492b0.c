/* Ghidra address: 016492b0 */
/* Ghidra symbol: FUN_016492b0 */


undefined8 FUN_016492b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar2 = FUN_01612560(&DAT_01611548,1);
  FUN_00414480(&local_40);
  uVar4 = 0;
  uVar3 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_3 + 0x48));
  cVar1 = FUN_01648ca0(uVar3,param_2);
  if (cVar1 == '\0') {
    FUN_01612770(uVar2,param_2,0x6f,0x78);
    uVar3 = FUN_0161be50(uVar2,*(undefined8 *)(param_1 + 0xb0),local_48,1);
    uVar4 = FUN_01614c70(uVar3);
  }
  FUN_00410f20(uVar2);
  FUN_00414560(&local_40,3);
  return uVar4;
}

