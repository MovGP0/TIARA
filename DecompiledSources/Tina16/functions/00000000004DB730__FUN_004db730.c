/* Ghidra address: 004db730 */
/* Ghidra symbol: FUN_004db730 */


void FUN_004db730(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_40 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x40))(param_1,local_30,4);
  iVar2 = (**(code **)(*local_30[0] + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_30[0] + 0x18))(local_30[0],&local_40,iVar4);
      uVar3 = FUN_0041b800(&local_38);
      cVar1 = FUN_00452340(local_40,&DAT_004db840,uVar3);
      if (cVar1 != '\0') {
        (**(code **)(*local_38 + 0x20))(local_38);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return;
}

