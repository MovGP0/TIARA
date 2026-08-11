/* Ghidra address: 006d70c0 */
/* Ghidra symbol: FUN_006d70c0 */


void FUN_006d70c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if (param_1[0xa6] != param_2) {
    lVar3 = FUN_007f9b70(param_1,1);
    if ((lVar3 != 0) && (param_1[0xa6] != 0)) {
      cVar1 = FUN_00654850(param_1[0xa6],*(undefined8 *)(lVar3 + 0x4c0));
      if (cVar1 != '\0') {
        FUN_00801e40(lVar3,param_1[0xa6]);
        if (*(longlong *)(lVar3 + 0x4c0) != param_1[0xa6]) {
          uVar2 = FUN_006d6630(param_1[0xa6]);
          (**(code **)(*param_1 + 0x278))(param_1,uVar2);
          return;
        }
      }
    }
    if (param_2 != 0) {
      FUN_0064e1d0(param_2);
      FUN_0064dbe0(param_2,1);
      if (((lVar3 != 0) && (param_1[0xa6] != 0)) && (*(longlong *)(lVar3 + 0x4c0) == param_1[0xa6]))
      {
        pcVar4 = (code *)FUN_00411550(param_2,0xffb3);
        cVar1 = (*pcVar4)(param_2);
        if (cVar1 == '\0') {
          FUN_00801e40(lVar3,param_1);
        }
        else {
          FUN_00801e40(lVar3,param_2);
        }
      }
      if ((*(char *)(param_2 + 0x4a0) == '\0') && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
        uVar5 = FUN_0065b870(param_2);
        thunk_FUN_041543e0(uVar5,0,0,0x101);
      }
    }
    if (param_1[0xa6] != 0) {
      FUN_0064dbe0(param_1[0xa6],0);
    }
    param_1[0xa6] = param_2;
    if (((lVar3 != 0) && (param_1[0xa6] != 0)) && (*(longlong *)(lVar3 + 0x4c0) == param_1[0xa6])) {
      FUN_0065c230(param_1[0xa6]);
    }
  }
  return;
}

