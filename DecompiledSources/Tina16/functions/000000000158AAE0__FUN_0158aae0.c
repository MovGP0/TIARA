/* Ghidra address: 0158aae0 */
/* Ghidra symbol: FUN_0158aae0 */


undefined1 FUN_0158aae0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_60 [10];
  
  puVar3 = local_60;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  FUN_00417740(local_60,&DAT_015764a8);
  puVar3 = local_60;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,local_60);
  FUN_00417740(local_60,&DAT_015764a8);
  return uVar1;
}

