/* Ghidra address: 00958520 */
/* Ghidra symbol: FUN_00958520 */


ulonglong FUN_00958520(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                      longlong *param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  bool bVar6;
  undefined8 local_38;
  longlong *local_30;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
  if (plVar3 == (longlong *)0x0) {
    FUN_00414520(param_3);
    cVar1 = FUN_009581c0(param_1);
    uVar5 = (undefined7)((ulonglong)param_4 >> 8);
    if (cVar1 == '\0') {
      uVar4 = CONCAT71(uVar5,0x29);
    }
    else {
      uVar4 = CONCAT71(uVar5,0x68);
    }
  }
  else {
    cVar1 = FUN_0095e880(plVar3);
    *param_4 = cVar1 == '\x01';
    *param_5 = plVar3[4];
    local_38 = *(undefined8 *)(*param_1 + 0x68);
    local_30 = param_1;
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    uVar4 = (ulonglong)uVar2;
    if ((byte)uVar2 < 0xa0) {
      bVar6 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uVar2 & 0xff) >> 3] >> (uVar2 & 7) & 1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (cVar1 == '\0') {
        FUN_00414520(param_3);
        uVar4 = CONCAT71((uint7)(uint3)(uVar2 >> 8),0x5c);
      }
      else {
        uVar4 = 0;
        FUN_00414b90(param_3,plVar3[10]);
        if ((char)plVar3[8] == '\x01') {
          cVar1 = FUN_009581c0(param_1);
          if (cVar1 != '\0') {
            uVar4 = 0x3c;
          }
        }
      }
    }
    else {
      FUN_00414520(param_3);
    }
  }
  return uVar4 & 0xffffffff;
}

