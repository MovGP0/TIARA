/* Ghidra address: 0114fe60 */
/* Ghidra symbol: FUN_0114fe60 */


int FUN_0114fe60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_33;
  undefined1 local_32;
  char local_31;
  undefined8 local_30;
  
  uVar5 = 0;
  iVar2 = FUN_01cfd2d0();
  iVar4 = 0;
  uVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = uVar6;
      lVar3 = FUN_01b05ad0(param_2,CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + '\x01'),0,
                           &local_31,&local_32,&local_33);
      if ((local_31 == '\a') && (*(longlong *)(lVar3 + 0x140) != 0)) {
        local_30 = *(undefined8 *)(*(longlong *)(lVar3 + 0x140) + 0x10);
        for (uVar6 = (uint)*(byte *)(*(longlong *)(lVar3 + 0x140) + 0x18); uVar6 != 0;
            uVar6 = uVar6 - 1) {
          cVar1 = FUN_0114eb60(local_30);
          if (cVar1 != '\0') {
            uVar5 = (uint)(ushort)((short)uVar5 + 1);
          }
          FUN_00b909d0(&local_30,0x14);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      uVar6 = uVar5;
    } while (iVar2 != 0);
  }
  return uVar5 << 3;
}

