/* Ghidra address: 00de1cb0 */
/* Ghidra symbol: FUN_00de1cb0 */


undefined4 FUN_00de1cb0(longlong *param_1,int param_2)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_2 == -0x202) {
    puVar1 = auStack_68;
    if (*(char *)((longlong)param_1 + 0x50b) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x50b) = 1;
      sVar2 = FUN_00ddeff0(param_1,0xfffffdfe);
      (**(code **)(*param_1 + 0x128))(param_1,sVar2 != 0);
      *(undefined1 *)((longlong)param_1 + 0x50b) = 0;
      puVar1 = local_30;
    }
  }
  else if (param_2 == -0x201) {
    puVar1 = auStack_68;
    if (*(char *)((longlong)param_1 + 0x50a) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x50a) = 1;
      local_30 = auStack_68;
      uVar3 = FUN_00ddee20(param_1,0xfffffdff);
      FUN_005fc860(param_1[0x17],uVar3);
      *(undefined1 *)((longlong)param_1 + 0x50a) = 0;
      puVar1 = local_30;
    }
  }
  else if (param_2 == -0x200) {
    puVar1 = auStack_68;
    if (*(char *)((longlong)param_1 + 0x50a) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x50a) = 1;
      local_30 = auStack_68;
      FUN_00ddf520(param_1,&local_48,0xfffffe00);
      FUN_00ddc550(&local_48,param_1[0x17]);
      *(undefined1 *)((longlong)param_1 + 0x50a) = 0;
      puVar1 = local_30;
    }
  }
  else {
    puVar1 = auStack_68;
    if ((param_2 == -0x1f5) && (puVar1 = auStack_68, *(char *)((longlong)param_1 + 0x509) == '\0'))
    {
      *(undefined1 *)((longlong)param_1 + 0x509) = 1;
      local_30 = auStack_68;
      uVar3 = FUN_00ddee20(param_1,0xfffffe0b);
      FUN_0064e030(param_1,uVar3);
      *(undefined1 *)((longlong)param_1 + 0x509) = 0;
      puVar1 = local_30;
    }
  }
  local_30 = puVar1;
  local_1c = 0;
  FUN_00460ba0(&local_48);
  return local_1c;
}

