/* Ghidra address: 012dafe0 */
/* Ghidra symbol: FUN_012dafe0 */


void FUN_012dafe0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffffb8;
  
  puVar1 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  lVar2 = FUN_014a74d0(*(undefined8 *)(param_1 + 0x58),puVar1,0,0,
                       in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  if (lVar2 != 0) {
    FUN_012d6bf0(puVar1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                 *(undefined1 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                 *(undefined1 *)(param_1 + 0x50),param_1);
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar3,&DAT_01984da0);
  }
  return;
}

