/* Ghidra address: 00714f30 */
/* Ghidra symbol: FUN_00714f30 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00714f30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_28[1] = 0;
  lVar2 = FUN_00714cd0(&DAT_00712178,1,param_3);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  local_28[0] = lVar2;
  FUN_00597e50(*(longlong *)(param_1 + 0x20) + 8,local_28);
  (**(code **)(*param_3 + 0x48))(param_3,*(undefined4 *)(param_1 + 0x30));
  uVar3 = FUN_0041b800(local_28 + 1);
  cVar1 = FUN_00452340(param_3,&DAT_00715038,uVar3);
  if (cVar1 != '\0') {
    local_38[0] = lVar2;
    FUN_00597e50(*(longlong *)(param_1 + 0x28) + 8,local_38);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  FUN_0041b890(param_2,param_1,&LAB_00715048);
  FUN_0041b800(local_28 + 1);
  return param_2;
}

