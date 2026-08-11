/* Ghidra address: 012beae0 */
/* Ghidra symbol: FUN_012beae0 */


void FUN_012beae0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  if (param_2 < iVar1) {
    if (param_3 != '\0') {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      iVar2 = 0;
      if (-1 < iVar1 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                    (*(longlong **)(param_1 + 0x10),iVar2,0);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
              (*(longlong **)(param_1 + 0x10),param_2,param_3);
  }
  return;
}

