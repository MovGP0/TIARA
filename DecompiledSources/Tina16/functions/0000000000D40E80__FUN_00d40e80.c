/* Ghidra address: 00d40e80 */
/* Ghidra symbol: FUN_00d40e80 */


void FUN_00d40e80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_20;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  cVar2 = FUN_00788df0(param_1);
  if (((cVar2 != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) &&
     (*(char *)(param_1 + 0x2a) != '\0')) {
    iVar3 = (int)*(short *)(param_2 + 0x10);
    local_20 = CONCAT44((int)*(short *)(param_2 + 0x12),iVar3);
    local_20 = FUN_00d40df0(param_1,&local_20);
    iVar3 = FUN_00d3e970(param_1,&local_20,param_3,param_4,iVar3);
    *(longlong *)(param_2 + 0x18) = (longlong)iVar3;
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (((lVar1 != 0x14) && (lVar1 != 9)) && ((lVar1 != 8 && (lVar1 != 0x15)))) {
      FUN_00d3d640(param_1,param_2);
      lVar1 = *(longlong *)(param_2 + 0x18);
      if (((lVar1 == 0x14) || (lVar1 == 9)) || ((lVar1 == 8 || (lVar1 == 0x15)))) {
        *(undefined8 *)(param_2 + 0x18) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}

