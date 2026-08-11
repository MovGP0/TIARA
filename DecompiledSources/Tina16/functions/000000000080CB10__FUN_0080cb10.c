/* Ghidra address: 0080cb10 */
/* Ghidra symbol: FUN_0080cb10 */


undefined8 FUN_0080cb10(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char local_39 [9];
  
  uVar4 = 0;
  iVar3 = thunk_FUN_04166556(param_2,0,0,0,0);
  if (iVar3 != 0) {
    if ((*param_2 == 0) || (iVar3 = thunk_FUN_039bb6fb(*param_2), iVar3 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = thunk_FUN_04166556(param_2,0,0,0,1);
    }
    else {
      iVar3 = thunk_FUN_0419023c(param_2,0,0,0,1);
    }
    if (iVar3 != 0) {
      uVar4 = 1;
      if ((int)param_2[1] == 0x12) {
        *(undefined1 *)(param_1 + 0x148) = 1;
      }
      else {
        local_39[0] = '\0';
        if (*(longlong *)(param_1 + 0x200) != 0) {
          (**(code **)(param_1 + 0x200))(*(undefined8 *)(param_1 + 0x208),param_2,local_39);
        }
        cVar2 = FUN_0080f720(param_1,param_2);
        if ((((cVar2 == '\0') && (cVar2 = FUN_0080c920(param_1,param_2), cVar2 == '\0')) &&
            (local_39[0] == '\0')) &&
           (((cVar2 = FUN_0080c790(param_1,param_2), cVar2 == '\0' &&
             (cVar2 = FUN_0080c7f0(param_1,param_2), cVar2 == '\0')) &&
            (cVar2 = FUN_0080c730(param_1,param_2), cVar2 == '\0')))) {
          thunk_FUN_040cea4c(param_2);
          if (bVar1) {
            thunk_FUN_040da573(param_2);
          }
          else {
            thunk_FUN_03e4a4db(param_2);
          }
        }
      }
    }
    return uVar4;
  }
  return 0;
}

