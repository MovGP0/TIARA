/* Ghidra address: 01526580 */
/* Ghidra symbol: FUN_01526580 */


bool FUN_01526580(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x05') {
    cVar1 = FUN_017c3740(param_2);
    if (cVar1 == '\0') {
      FUN_004169a0(local_30,param_2 + 0x5b);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                        (*(longlong **)(param_1 + 0x28),local_30[0]);
      if (-1 < iVar2) {
        FUN_004169a0(&local_38,param_2 + 0x5b);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))
                          (*(longlong **)(param_1 + 0x68),local_38);
        if (-1 < iVar3) {
          iVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
          (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))
                    (*(longlong **)(param_1 + 0x68),iVar3,(longlong)iVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))(*(longlong **)(param_1 + 0x28),iVar2);
      }
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  FUN_00414560(&local_38,2);
  return iVar2 == 0;
}

