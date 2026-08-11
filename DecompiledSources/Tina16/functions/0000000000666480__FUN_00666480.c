/* Ghidra address: 00666480 */
/* Ghidra symbol: FUN_00666480 */


void FUN_00666480(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar5 = 0;
  iVar6 = 0;
  lVar2 = *(longlong *)(param_2 + 0x498);
  if (*(longlong *)(lVar2 + 0x78) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x490) + 0x70);
    bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x18) + 0x31);
    FUN_005fce70(lVar3,*(byte *)(*(longlong *)(lVar3 + 0x18) + 0x31) | 1);
    (**(code **)(**(longlong **)(param_2 + 0x490) + 0x128))
              (*(longlong **)(param_2 + 0x490),&local_48,lVar2 + 0x78,0x102);
    if ((bVar1 & 1) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x490) + 0x70);
      FUN_005fce70(lVar3,*(byte *)(*(longlong *)(lVar3 + 0x18) + 0x31) & 0xfe);
    }
    iVar5 = (local_40 - local_48) + 8;
    iVar6 = (local_3c - local_44) + 4;
  }
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x490) + 0x128))
              (*(longlong **)(param_2 + 0x490),&local_48,lVar2 + 0x80,0x102);
    iVar4 = (local_40 - local_48) + 8;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    iVar6 = iVar6 + (local_3c - local_44) + 4;
  }
  FUN_0064cc50(param_2,iVar6);
  FUN_0064cbf0(param_2,iVar5);
  return;
}

