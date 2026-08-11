/* Ghidra address: 01aac150 */
/* Ghidra symbol: FUN_01aac150 */


undefined1 FUN_01aac150(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 local_71;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  byte local_2a;
  byte local_29;
  
  local_38 = 0;
  local_71 = 0;
  FUN_01d03160(*(undefined8 *)(param_3 + 0x550));
  (**(code **)(**(longlong **)(param_3 + 0x550) + 0x288))(*(longlong **)(param_3 + 0x550),&local_38)
  ;
  local_44 = 1;
  local_3c = 1;
  local_40 = 1;
  local_48 = 1;
  local_58 = 0x100000001;
  uStack_50 = 0x100000001;
  uVar3 = FUN_01aa16f0(*(undefined8 *)(param_3 + 0x550));
  cVar4 = FUN_014f9c50(*(undefined8 *)(param_3 + 0x550));
  if (cVar4 != '\0') {
    FUN_014f9d60(&local_48,uVar3);
    FUN_014f9dc0(&local_58,uVar3);
  }
  uVar1 = *(undefined2 *)(param_3 + 0x41f6 + (longlong)local_44 * 2);
  uVar2 = *(undefined2 *)(param_3 + 0x4236 + (longlong)local_3c * 2);
  FUN_01aac8f0(param_1,uVar1,&local_2c,&local_29,&local_2b);
  FUN_01aac8f0(param_1,uVar2,&local_2c,&local_2a,&local_2b);
  if (local_2a <= local_29) goto LAB_01aac2e4;
  FUN_01aa1570(param_3,&local_48,&local_58,local_5c,local_60);
  if (param_4 != '\0') {
    FUN_01aac050(param_1,param_2,uVar1);
    if (DAT_02110a55 != '\0') goto LAB_01aac2e4;
    FUN_01aac050(param_1,param_2,uVar2);
    if (DAT_02110a55 != '\0') goto LAB_01aac2e4;
  }
  local_71 = 1;
LAB_01aac2e4:
  FUN_00414480(&local_38);
  return local_71;
}

