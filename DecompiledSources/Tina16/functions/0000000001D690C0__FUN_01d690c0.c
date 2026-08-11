/* Ghidra address: 01d690c0 */
/* Ghidra symbol: FUN_01d690c0 */


void FUN_01d690c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *local_50;
  longlong local_48;
  undefined2 local_40;
  
  local_48 = FUN_01d69640(&PTR_FUN_01d67800,1);
  iVar4 = *(int *)(*(longlong *)(param_2 + 0xa0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00b94e60(*(undefined8 *)(param_2 + 0xa0),iVar3);
      cVar1 = FUN_0198a580(lVar2);
      if ((cVar1 == '\x04') &&
         ((cVar1 = FUN_01d04d50(lVar2), cVar1 != '\0' ||
          (cVar1 = FUN_01d04d70(lVar2), cVar1 != '\0')))) {
        local_50 = (longlong *)FUN_004095c0(0x10);
        *local_50 = lVar2;
        local_50[1] = *(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0xa8);
        FUN_00597e50(local_48 + 8,&local_50);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_40 = FUN_016ea1b0(param_1,(uint)*(ushort *)(local_48 + 0x10) * 2);
  FUN_016e9f50(param_1,FUN_01d69060);
  FUN_016e9ff0(param_1,FUN_01d68a90);
  FUN_016ea040(param_1,FUN_01d68e80);
  FUN_016ea050(param_1,&local_48,0x10);
  return;
}

