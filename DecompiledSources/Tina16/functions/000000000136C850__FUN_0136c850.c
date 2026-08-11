/* Ghidra address: 0136c850 */
/* Ghidra symbol: FUN_0136c850 */


void FUN_0136c850(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_48 [3];
  uint local_30;
  uint local_2c [3];
  
  local_48[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar3 = FUN_0198d430(plVar1);
  FUN_01a982d0(uVar3,param_2,param_3,local_2c,&local_30);
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,local_2c[0],local_30);
  FUN_00414480(local_48);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x118))(plVar4);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\0') {
        uVar3 = FUN_01c7da00(*(undefined8 *)(param_1 + 0x10));
        FUN_012beac0(uVar3,plVar4);
        uVar3 = FUN_01c7da00(*(undefined8 *)(param_1 + 0x10));
        lVar5 = FUN_012be9c0(uVar3,plVar4);
        if (lVar5 == 0) {
          uVar3 = FUN_00b89270();
          FUN_00b8e520(uVar3,local_48,0x40c);
          if (*PTR_DAT_02003b28 != '\0') {
            *(short *)PTR_DAT_02003428 = *(short *)PTR_DAT_02003428 + 1;
          }
        }
        else {
          uVar3 = FUN_00b89270();
          FUN_00b8e520(uVar3,local_48,0x40d);
          if (*PTR_DAT_02003b28 != '\0') {
            *(short *)PTR_DAT_02004d68 = *(short *)PTR_DAT_02004d68 + 1;
          }
        }
      }
      else {
        uVar3 = FUN_0198d430(plVar1);
        cVar2 = FUN_017ff250(plVar4);
        (**(code **)(*plVar4 + 0x260))(plVar4,uVar3,cVar2 == '\0');
        cVar2 = FUN_017ff250(plVar4);
        if (cVar2 != '\0') {
          uVar3 = FUN_01c7da00(*(undefined8 *)(param_1 + 0x10));
          lVar5 = FUN_012be9c0(uVar3,plVar4);
          if (lVar5 == 0) {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,local_48,0x40c);
          }
          else {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,local_48,0x40d);
          }
        }
      }
      FUN_01364ff0(param_1,param_2,param_3);
    }
  }
  if ((local_48[0] != 0) && (*PTR_DAT_02003d20 != '\0')) {
    FUN_0072d440(local_48[0],2,4,0);
  }
  FUN_00414480(local_48);
  return;
}

