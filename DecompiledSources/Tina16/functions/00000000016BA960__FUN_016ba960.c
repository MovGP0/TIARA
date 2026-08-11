/* Ghidra address: 016ba960 */
/* Ghidra symbol: FUN_016ba960 */


undefined8
FUN_016ba960(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,undefined8 *param_5
            ,char param_6)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_res20;
  undefined1 local_240 [256];
  undefined1 local_140 [8];
  char local_138 [256];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  uStack_28 = param_5[2];
  uStack_20 = param_5[3];
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((byte)(param_6 - 0x28U) < 0x58) {
    uVar2 = ((ulonglong)(byte)(param_6 - 0x28U) & 0x7f) + 0x20;
    bVar3 = (*(byte *)(((longlong)uVar2 >> 3) + 0x16bab78) >> (uVar2 & 7) & 1) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_0040f800(param_1 + 0x20,&DAT_016bab87,0x20);
  }
  FUN_016ba220(param_1,local_138,&local_38,1);
  if (param_3 == '\0') {
    cVar1 = FUN_016ba520(param_1,local_138,local_res20,&local_38);
    if (cVar1 == '\0') {
      if (local_138[0] == '\0') {
        local_140[0] = 0;
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x23,local_140,0xffffffff);
      }
      else {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0,local_138,0xffffffff);
      }
    }
  }
  else if (param_3 == '\x01') {
    cVar1 = FUN_016ba860(param_1,local_138,local_res20);
    if (cVar1 == '\0') {
      if (local_138[0] == '\0') {
        FUN_00416910(local_240,local_res20,0xff);
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x22,local_240,0xffffffff);
      }
      else {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0,local_138,0xffffffff);
      }
    }
  }
  if (param_6 != '\0') {
    FUN_016b9f90(param_1,param_6);
  }
  FUN_00414ff0(param_2,local_138);
  FUN_00414480(&local_res20);
  return param_2;
}

