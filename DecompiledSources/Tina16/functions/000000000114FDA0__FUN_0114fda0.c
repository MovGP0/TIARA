/* Ghidra address: 0114fda0 */
/* Ghidra symbol: FUN_0114fda0 */


int FUN_0114fda0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_2b;
  undefined1 local_2a;
  char local_29;
  
  uVar6 = 0;
  iVar3 = FUN_01cfd2d0();
  iVar5 = 0;
  uVar1 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar6 = uVar1;
      lVar4 = FUN_01b05ad0(param_2,CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + '\x01'),0,
                           &local_29,&local_2a,&local_2b);
      if ((local_29 == '\x06') &&
         ((*(float *)(lVar4 + 0x10) != 0.0 ||
          (cVar2 = FUN_0114eb00(*(undefined1 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20)),
          cVar2 != '\0')))) {
        uVar6 = (uint)(ushort)((short)uVar6 + 1);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      uVar1 = uVar6;
    } while (iVar3 != 0);
  }
  return uVar6 << 3;
}

