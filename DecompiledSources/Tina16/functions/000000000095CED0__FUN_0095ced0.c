/* Ghidra address: 0095ced0 */
/* Ghidra symbol: FUN_0095ced0 */


void FUN_0095ced0(longlong *param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_4 = 1;
  (**(code **)(*param_2 + 0xe8))(param_2,local_20);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,local_20[0]);
  if (plVar3 == (longlong *)0x0) {
    *param_3 = 0;
    cVar1 = FUN_009581c0(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x29,0,param_2);
      if (cVar1 == '\0') {
        *param_4 = 0;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x68,0,param_2);
      if (cVar1 == '\0') {
        *param_4 = 0;
      }
    }
  }
  else {
    *param_3 = 1;
    local_30 = *(undefined8 *)(*param_1 + 0x68);
    local_28 = param_1;
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_30);
    if ((byte)uVar2 != 0) {
      if ((byte)uVar2 < 0xa0) {
        bVar4 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uVar2 & 0xff) >> 3] >> (uVar2 & 7) & 1) != 0;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        *param_3 = 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,uVar2,plVar3,param_2);
      if (cVar1 == '\0') {
        *param_4 = 0;
        goto LAB_0095d080;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (cVar1 == '\0') {
      *param_3 = 0;
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x5c,plVar3,param_2);
      if (cVar1 == '\0') {
        *param_4 = 0;
        goto LAB_0095d080;
      }
    }
    if ((char)plVar3[8] == '\x01') {
      cVar1 = FUN_009581c0(param_1);
      if (cVar1 != '\0') {
        *param_3 = 0;
        cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x3c,plVar3,param_2);
        if (cVar1 == '\0') {
          *param_4 = 0;
        }
      }
    }
  }
LAB_0095d080:
  FUN_00414520(local_20);
  return;
}

