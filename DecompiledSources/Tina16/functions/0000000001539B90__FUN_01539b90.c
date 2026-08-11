/* Ghidra address: 01539b90 */
/* Ghidra symbol: FUN_01539b90 */


void FUN_01539b90(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined1 *param_7,undefined1 *param_8,
                 undefined1 *param_9,undefined1 *param_10)

{
  short sVar1;
  undefined8 *local_30;
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar1 != 0x3fe) && (sVar1 = (**(code **)(*param_1 + 0xf8))(param_1), sVar1 != 0x4b1)) {
    return;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_30);
  *param_2 = *local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,5,&local_30);
  *param_3 = *local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
  *param_4 = *local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_30);
  *param_7 = *(undefined1 *)local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,7,&local_30);
  *param_8 = *(undefined1 *)local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_30);
  *param_5 = *local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_30);
  *param_9 = *(undefined1 *)local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_30);
  *param_10 = *(undefined1 *)local_30;
  (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_30);
  *param_6 = *local_30;
  return;
}

