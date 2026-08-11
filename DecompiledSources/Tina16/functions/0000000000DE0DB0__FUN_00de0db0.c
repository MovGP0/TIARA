/* Ghidra address: 00de0db0 */
/* Ghidra symbol: FUN_00de0db0 */


void FUN_00de0db0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_007f9b70(param_1,1);
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_007f0370);
  lVar3 = 0;
  if (cVar1 != '\0') {
    lVar3 = lVar2;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x4d6) == '\x01')) {
    (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x38))
              (*(longlong **)(param_1 + 0x4e0),*(undefined4 *)(param_2 + 8));
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_00de18e0(param_1,0,0,0);
    }
  }
  return;
}

