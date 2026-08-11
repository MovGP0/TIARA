/* Ghidra address: 0197c910 */
/* Ghidra symbol: FUN_0197c910 */


void FUN_0197c910(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01918c28);
    if (cVar1 == '\0') {
      FUN_004aee30(param_1,param_2);
    }
    cVar1 = FUN_004113d0(param_2,&LAB_00474bd8);
    if (cVar1 != '\0') {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),param_2);
    }
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01918c28);
    if (cVar1 != '\0') {
      cVar1 = FUN_01950830(param_2);
      if (cVar1 == '\0') {
        lVar2 = (**(code **)(*param_2 + 0x118))(param_2);
        if (lVar2 == 0) {
          param_2[0x1d] = param_1;
        }
        else {
          (**(code **)(*param_2 + 0xb8))(param_2,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (param_3 == '\x02') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01918c28);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xb8))(param_2,0);
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18));
    }
    else {
      FUN_004aee30(*(undefined8 *)(param_1 + 0x18),param_2);
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

