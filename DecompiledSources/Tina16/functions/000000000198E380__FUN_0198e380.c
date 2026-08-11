/* Ghidra address: 0198e380 */
/* Ghidra symbol: FUN_0198e380 */


undefined1 FUN_0198e380(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    cVar1 = (**(code **)(*param_2 + 0x88))
                      (param_2,*(undefined8 *)(param_1 + 0xd8),param_1 + 200,PTR_DAT_02004010[0x816]
                       ,PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,PTR_DAT_02004010[0x815],
                       *PTR_DAT_02005310);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xa0))(param_2,*(undefined8 *)(param_1 + 0xd8));
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    lVar3 = FUN_0069e8a0();
    uVar2 = *(undefined1 *)(lVar3 + 0x39);
  }
  return uVar2;
}

