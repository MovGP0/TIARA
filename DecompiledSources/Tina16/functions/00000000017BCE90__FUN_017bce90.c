/* Ghidra address: 017bce90 */
/* Ghidra symbol: FUN_017bce90 */


void FUN_017bce90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 local_1a;
  
  FUN_017bdde0(param_1,param_2);
  iVar1 = FUN_01d31a40(*param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(*param_2,param_1 + 0x2d8,2);
    local_1a = *(undefined2 *)(param_1 + 0xb8);
    FUN_01d311c0(*param_2,&local_1a,2);
    local_1a = *(undefined2 *)(param_1 + 0xbc);
    FUN_01d311c0(*param_2,&local_1a,2);
  }
  return;
}

