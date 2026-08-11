/* Ghidra address: 00c56a30 */
/* Ghidra symbol: FUN_00c56a30 */


void FUN_00c56a30(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  *(char *)(param_1 + 0xa4) = (char)param_2;
  *(undefined1 *)((longlong)param_1 + 0x521) = 1;
  uVar1 = FUN_00c56f00(param_1,param_4,param_5);
  if ((char)param_2 == '\0') {
    if ((*(char *)((longlong)param_1 + 0x4f4) == '\0') && ((char)param_1[0x9d] != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x4f4) = 1;
      if ((*(int *)((longlong)param_1 + 0x4ec) == (int)param_1[0x9f]) &&
         (*(char *)((longlong)param_1 + 0x50d) != '\0')) {
        uVar2 = (undefined4)
                CONCAT71((uint7)(uint3)((uint)*(int *)((longlong)param_1 + 0x4ec) >> 8),1);
      }
      else {
        uVar2 = 0;
      }
      FUN_00c55c70(param_1,*(undefined4 *)((longlong)param_1 + 0x4ec),uVar2);
      *(undefined4 *)((longlong)param_1 + 0x4ec) = 0xffffffff;
    }
    FUN_00c56db0(param_1,uVar1);
  }
  else {
    FUN_0064e190(param_1,1);
    if ((*(char *)((longlong)param_1 + 0x4f5) == '\0') && ((char)param_1[0x9d] != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x4f5) = 1;
      if (((int)param_1[0x9e] == (int)param_1[0x9f]) &&
         (*(char *)((longlong)param_1 + 0x50d) != '\0')) {
        uVar2 = (undefined4)CONCAT71((uint7)(uint3)((uint)(int)param_1[0x9e] >> 8),1);
      }
      else {
        uVar2 = 0;
      }
      FUN_00c55c70(param_1,(int)param_1[0x9e],uVar2);
      *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
    }
    FUN_00c56d00(param_1,uVar1);
  }
  FUN_00c56eb0(param_1,uVar1);
  if (*(char *)((longlong)param_1 + 900) != '\0') {
    (**(code **)(*param_1 + 600))(param_1);
  }
  return;
}

