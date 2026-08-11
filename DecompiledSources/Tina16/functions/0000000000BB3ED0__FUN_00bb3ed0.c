/* Ghidra address: 00bb3ed0 */
/* Ghidra symbol: FUN_00bb3ed0 */


void FUN_00bb3ed0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_48 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x40))(param_2);
    FUN_00baec70(param_1,local_30);
    iVar2 = (**(code **)(*local_30[0] + 0x18))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00baec70(param_1,&local_40);
        (**(code **)(*local_40 + 0x20))(local_40,&local_38,iVar4);
        (**(code **)(*local_38 + 200))(local_38,param_2);
        FUN_00baec70(param_1,&local_48);
        iVar3 = (**(code **)(*local_48 + 0x18))(local_48);
        if (iVar4 < iVar3 + -1) {
          (**(code **)(*param_2 + 0x50))(param_2,1);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  FUN_00417840(&local_48,&DAT_00b9f960,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return;
}

