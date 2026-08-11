/* Ghidra address: 006fee80 */
/* Ghidra symbol: FUN_006fee80 */


void FUN_006fee80(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auStack_48 [40];
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x391) != '\0')) &&
      ((*(char *)((longlong)param_1 + 0x4dc) != '\0' || ((char)param_1[0x94] != '\0')))) &&
     (cVar1 = FUN_006fee10(auStack_48), cVar1 != '\0')) {
    lVar3 = FUN_00700700(param_1,*(undefined2 *)(param_2 + 8));
    if ((lVar3 != 0) && (((char)param_1[0x94] == '\0' || (*(char *)(lVar3 + 0x33a) == '\x05')))) {
      if (((*(char *)(lVar3 + 0x33a) == '\x02') && (iVar2 = FUN_006d3e90(), 0x40046 < iVar2)) ||
         ((*(longlong *)(lVar3 + 0x330) == 0 && (*(longlong *)(lVar3 + 0x328) == 0)))) {
        pcVar4 = (code *)FUN_00411550(lVar3,0xffea);
        (*pcVar4)(lVar3);
      }
      else {
        pcVar4 = (code *)FUN_00411550(param_1,0xffa8);
        (*pcVar4)(param_1,lVar3);
      }
      *(undefined8 *)(param_2 + 0x18) = 1;
      return;
    }
  }
  FUN_0065a1c0(param_1,param_2);
  return;
}

