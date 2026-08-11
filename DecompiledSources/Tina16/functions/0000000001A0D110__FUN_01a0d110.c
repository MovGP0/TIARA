/* Ghidra address: 01a0d110 */
/* Ghidra symbol: FUN_01a0d110 */


undefined8 FUN_01a0d110(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_00414480(param_2);
  iVar2 = 0;
  bVar3 = false;
  while( true ) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x1c8))(*(longlong **)(param_1 + 0x98));
    if ((iVar1 <= iVar2) || (bVar3)) break;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x210))
                      (*(longlong **)(param_1 + 0x98),iVar2);
    bVar3 = param_3 == iVar1;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x298))
              (*(longlong **)(param_1 + 0x98),param_2,iVar1);
    iVar2 = iVar2 + 1;
  }
  return param_2;
}

