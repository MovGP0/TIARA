/* Ghidra address: 00c25590 */
/* Ghidra symbol: FUN_00c25590 */


void FUN_00c25590(longlong param_1)

{
  int iVar1;
  char local_19 [9];
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\0') {
    while( true ) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                        (*(longlong **)(param_1 + 0x18),local_19,1);
      if ((iVar1 != 1) || (local_19[0] == '\0')) break;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),local_19[0],1);
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}

