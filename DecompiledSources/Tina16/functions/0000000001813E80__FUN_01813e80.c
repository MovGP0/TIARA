/* Ghidra address: 01813e80 */
/* Ghidra symbol: FUN_01813e80 */


void FUN_01813e80(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  cVar1 = FUN_01953b80(param_3);
  if ((cVar1 == '\0') || (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x48) == 0)) {
    FUN_00410ae0(*param_3,param_2 + 0x20);
  }
  else {
    FUN_00414ad0(param_2 + 0x20,L"inherited");
    (**(code **)(*(longlong *)(param_1 + 0x60) + 0x48))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50),param_3[2],local_30);
  }
  if ((param_3 == *(longlong **)(param_1 + 0x68)) ||
     (*(char *)(*(longlong *)(param_1 + 0x60) + 0x7a) != '\0')) {
    FUN_01813180(*(undefined8 *)(param_1 + 0x60),local_40,param_3,0,0);
    FUN_00414ad0(param_2 + 0x30,local_40[0]);
  }
  else {
    FUN_01813180(*(undefined8 *)(param_1 + 0x60),&local_48,param_3,0,0);
    FUN_00416cd0(param_2 + 0x30,4,L"Name=\"",param_3[2],&LAB_018140e4,local_48);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x78) != '\0') &&
     ((*(byte *)(param_3 + 0x1a) & 8) != 0)) {
    (**(code **)(*param_3 + 0x1f0))(param_3,param_2,local_30[0]);
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    iVar2 = (**(code **)(*(longlong *)param_3[0x10] + 0x30))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_01803a30(param_2);
        uVar4 = (**(code **)(*(longlong *)param_3[0x10] + 0x20))((longlong *)param_3[0x10],iVar5);
        FUN_01813e80(param_1,uVar3,uVar4);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

