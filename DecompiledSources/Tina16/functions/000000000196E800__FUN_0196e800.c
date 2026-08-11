/* Ghidra address: 0196e800 */
/* Ghidra symbol: FUN_0196e800 */


void FUN_0196e800(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x6d8) = 0;
  }
  FUN_0194f620(param_1,param_2 & 0xfffffffc);
  lVar1 = *(longlong *)(param_1 + 0x218);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x841) == '\0')) {
    FUN_00805200(lVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x210);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x290))(plVar2,param_1);
  }
  FUN_01977650(param_1,0);
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x200));
  }
  FUN_00452320(param_1 + 0x208);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x170));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x220));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x228));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x240));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x248));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x260));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x268));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x298));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x278));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x280));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x198));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x290));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x188));
  FUN_00410f20(*(undefined8 *)(param_1 + 400));
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  FUN_00452320(param_1 + 0x2b8);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

