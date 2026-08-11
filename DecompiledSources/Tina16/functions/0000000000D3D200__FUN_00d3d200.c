/* Ghidra address: 00d3d200 */
/* Ghidra symbol: FUN_00d3d200 */


void FUN_00d3d200(longlong param_1,char param_2,byte param_3,int param_4)

{
  if (param_2 == '\x01') {
    if (param_3 < 4) {
      if (param_3 == 3) {
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,1,0);
      }
      else if (param_3 == 1) {
        *(int *)(param_1 + 0xb8) = param_4;
        *(undefined1 *)(param_1 + 0xb6) = 1;
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,param_4 << 0x10 | 5,0);
        *(undefined1 *)(param_1 + 0xb6) = 0;
      }
      else if (param_3 == 2) {
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,0,0);
      }
    }
    else if (param_3 == 6) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,2,0);
    }
    else if (param_3 == 7) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,3,0);
    }
  }
  else if (param_2 == '\0') {
    if (param_3 < 6) {
      if (param_3 == 5) {
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x114,1,0);
      }
      else if (param_3 == 1) {
        *(int *)(param_1 + 0xb8) = param_4;
        *(undefined1 *)(param_1 + 0xb6) = 1;
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x114,param_4 << 0x10 | 5,0);
        *(undefined1 *)(param_1 + 0xb6) = 0;
      }
      else if (param_3 == 4) {
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x114,0,0);
      }
    }
    else if (param_3 == 8) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x114,2,0);
    }
    else if (param_3 == 9) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x114,3,0);
    }
  }
  return;
}

