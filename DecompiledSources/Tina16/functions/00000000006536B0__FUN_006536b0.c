/* Ghidra address: 006536b0 */
/* Ghidra symbol: FUN_006536b0 */


undefined1 FUN_006536b0(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = 0;
  if (param_4 < 4) {
    if (param_4 == 3) {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),0);
      iVar3 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))
                        (*(longlong **)(param_3 + 0xd8),0);
      uVar1 = iVar2 < iVar3;
    }
    else if (param_4 == 1) {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),1);
      iVar3 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))
                        (*(longlong **)(param_3 + 0xd8),1);
      uVar1 = iVar2 < iVar3;
    }
    else if (param_4 == 2) {
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),1);
      iVar3 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))
                        (*(longlong **)(param_2 + 0xd8),3);
      iVar4 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))
                        (*(longlong **)(param_3 + 0xd8),1);
      iVar5 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))
                        (*(longlong **)(param_3 + 0xd8),3);
      uVar1 = iVar4 + iVar5 <= iVar2 + iVar3;
    }
  }
  else if (param_4 == 4) {
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),0);
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x20))(*(longlong **)(param_2 + 0xd8),2);
    iVar4 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))(*(longlong **)(param_3 + 0xd8),0);
    iVar5 = (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x20))(*(longlong **)(param_3 + 0xd8),2);
    uVar1 = iVar4 + iVar5 <= iVar2 + iVar3;
  }
  else if (param_4 == 6) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1d8))
                      (*(longlong **)(param_1 + 0x70),param_2,param_3);
  }
  return uVar1;
}

