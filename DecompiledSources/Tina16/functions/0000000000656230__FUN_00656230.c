/* Ghidra address: 00656230 */
/* Ghidra symbol: FUN_00656230 */


longlong FUN_00656230(longlong param_1,undefined8 param_2,undefined1 param_3,char param_4,
                     char param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  
  local_28 = 0;
  if (((param_4 != '\0') && (*(longlong *)(param_1 + 0x378) != 0)) &&
     (iVar3 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10) + -1, -1 < iVar3)) {
    do {
      if (param_5 != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar3);
        local_38 = 1;
        local_28 = FUN_00656230(uVar2,param_2,param_3,1);
      }
      if (local_28 == 0) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar3);
        cVar1 = FUN_00656130(auStack_58,uVar2);
        if (cVar1 != '\0') break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  if (((*(longlong *)(param_1 + 0x370) != 0) && (local_28 == 0)) &&
     (iVar3 = *(int *)(*(longlong *)(param_1 + 0x370) + 0x10) + -1, -1 < iVar3)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x370),iVar3);
      cVar1 = FUN_00656130(auStack_58,uVar2);
      if (cVar1 != '\0') {
        return local_28;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return local_28;
}

