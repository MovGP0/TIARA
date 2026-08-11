/* Ghidra address: 00728e80 */
/* Ghidra symbol: FUN_00728e80 */


uint FUN_00728e80(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa0))
                    (*(longlong **)(param_1 + 0x90),param_1 + 0xe0);
  if ((uVar2 & 0x80000000) == 0) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffe6);
    uVar2 = (*pcVar4)(param_1,*(undefined8 *)(param_1 + 0xe0),param_1 + 0xa0);
    if ((*(uint *)(param_1 + 0xd8) & 8) != 0) {
      iVar3 = FUN_0044f080();
      if (iVar3 == 6) {
        iVar3 = FUN_0044f0a0();
        if (iVar3 == 0) {
          cVar1 = FUN_00440b00(*(undefined8 *)(param_1 + 0xa0),1);
          if (cVar1 == '\0') {
            FUN_00414ad0(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x178));
          }
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x78))
              (*(longlong **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa0));
  }
  return uVar2;
}

