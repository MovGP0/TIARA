/* Ghidra address: 0080fc90 */
/* Ghidra symbol: FUN_0080fc90 */


ulonglong FUN_0080fc90(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar1 = FUN_006265e0();
    if ((cVar1 != '\0') &&
       (uVar2 = (ulonglong)*(byte *)(param_1 + 0x38), *(byte *)(param_1 + 0x38) == 0)) {
      (**(code **)(*param_2 + 0xe0))(param_2,&local_38);
      local_38 = FUN_00652390(param_2,&local_38,*(undefined8 *)(param_1 + 8));
      local_30[0] = FUN_00652390(param_2,local_30,*(undefined8 *)(param_1 + 8));
      (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),&local_48);
      FUN_004238d0(&local_58,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   (int)local_40 - *(int *)(param_1 + 0x1c),
                   local_40._4_4_ - *(int *)(param_1 + 0x20));
      local_48 = local_58;
      local_40 = uStack_50;
      cVar1 = FUN_00423210(&local_48,&local_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_00423210(&local_48,local_30);
        if (cVar1 != '\0') {
          uVar2 = 0;
          goto LAB_0080fd6d;
        }
      }
      uVar2 = CONCAT71((int7)((ulonglong)&local_38 >> 8),1);
    }
  }
LAB_0080fd6d:
  return uVar2 & 0xffffffff;
}

