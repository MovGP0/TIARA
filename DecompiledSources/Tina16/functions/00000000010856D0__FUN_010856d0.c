/* Ghidra address: 010856d0 */
/* Ghidra symbol: FUN_010856d0 */


void FUN_010856d0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [12];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414b50(&local_28,&DAT_010858bc);
  cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_0160ee50(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x18),&local_2c),
     cVar2 == '\0')) {
    FUN_00414b50(&local_28,L".ino");
  }
  iVar4 = *(int *)(param_1 + 0xa98);
  iVar1 = local_2c;
  if (iVar4 <= iVar4 + 1000) {
    iVar5 = ((iVar4 + 1000) - iVar4) + 1;
    do {
      FUN_0043f750(&local_40,iVar4);
      FUN_00416cd0(&local_20,3,L"noname",local_40,local_28);
      cVar2 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_20,local_38,0);
      iVar1 = iVar4;
      if (cVar2 == '\0') break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      iVar1 = local_2c;
    } while (iVar5 != 0);
  }
  local_2c = iVar1;
  *(int *)(param_1 + 0xa98) = local_2c;
  FUN_010b2cf0(*(undefined8 *)(param_1 + 0xac8),local_20);
  FUN_0043e1a0(&local_50,local_20);
  FUN_00441920(&local_48,local_50);
  FUN_010b04f0(*(undefined8 *)(param_1 + 0xac8),local_48,1);
  lVar3 = FUN_0107a0c0(param_1);
  FUN_010792a0(param_1,lVar3);
  if (lVar3 != 0) {
    FUN_01085110(param_1,*(undefined8 *)(lVar3 + 0x10),0xffffffff);
  }
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_28,2);
  return;
}

