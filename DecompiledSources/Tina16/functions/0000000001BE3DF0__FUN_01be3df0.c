/* Ghidra address: 01be3df0 */
/* Ghidra symbol: FUN_01be3df0 */


bool FUN_01be3df0(longlong param_1,char param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  lVar2 = FUN_01be2d90(*(undefined8 *)(param_1 + 0x50));
  *param_3 = lVar2;
  while (bVar3) {
    if (param_2 == '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x2a8))
                        (*(longlong **)(param_1 + 0x50),*param_3,1);
      *param_3 = lVar2;
    }
    else {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x2a0))
                        (*(longlong **)(param_1 + 0x50),*param_3,1);
      *param_3 = lVar2;
    }
    if ((*param_3 != 0) && (*(longlong *)(*param_3 + 0x80) != 0)) {
      if ((*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x34) & 0x10) != 0) break;
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x2c8))(*(longlong **)(param_1 + 0x50))
      ;
      if (cVar1 == '\0') {
        if (((*(char *)(*param_3 + 0x94) == '\0') &&
            (*(char *)(*(longlong *)(*param_3 + 0x80) + 0xa9) != '\0')) &&
           (*(char *)(*param_3 + 0xc2) != '\x02')) break;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(*param_3 + 0x80) + 0xf0))
                          (*(longlong **)(*param_3 + 0x80));
        if (cVar1 != '\0') break;
      }
    }
    bVar3 = *param_3 != 0;
  }
  return *param_3 != 0;
}

