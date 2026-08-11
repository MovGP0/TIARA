/* Ghidra address: 013ba2b0 */
/* Ghidra symbol: FUN_013ba2b0 */


void FUN_013ba2b0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if (*param_2 != 0) {
    uVar1 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2);
    FUN_004095f0(uVar1);
  }
  uVar3 = 0;
  lVar2 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,10,5);
  *param_2 = lVar2;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_01694110(*param_2,1,*(longlong *)(param_1 + 8),CONCAT11(uVar3,4));
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_013b33d0(*param_2,&DAT_013ba328);
  }
  return;
}

