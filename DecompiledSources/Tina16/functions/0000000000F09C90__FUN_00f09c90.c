/* Ghidra address: 00f09c90 */
/* Ghidra symbol: FUN_00f09c90 */


void FUN_00f09c90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (iVar1 != 2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    if (iVar1 != 3) {
      uVar3 = 0;
      goto LAB_00f09cd7;
    }
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
LAB_00f09cd7:
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
            (*(longlong **)(param_1 + 0x718),uVar3 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))
            (*(longlong **)(param_1 + 0x720),uVar3 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))
            (*(longlong **)(param_1 + 0x728),uVar3 & 0xffffffff);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))
            (*(longlong **)(param_1 + 0x738),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(int)uVar2 == 3) & 0xffffffff);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x128))
            (*(longlong **)(param_1 + 0x730),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(int)uVar2 == 3) & 0xffffffff);
  FUN_00f09f30(param_1,param_2);
  return;
}

