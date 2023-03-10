#define GHIDRA
#ifndef INCLUDE_GUARD_gnulnx_arm_til
#define INCLUDE_GUARD_gnulnx_arm_til
#include "../__idatilcommon.h"



struct __user_cap_header_struct;
struct __user_cap_data_struct;
struct __old_kernel_stat;
struct old_linux_dirent;
struct robust_list_head;
struct mmap_arg_struct;
struct perf_event_attr;
struct compat_timeval;
struct linux_dirent64;
struct oldold_utsname;
struct sel_arg_struct;
struct kexec_segment;
struct getcpu_cache;
struct linux_dirent;
struct compat_stat;
struct file_handle;
struct new_utsname;
struct old_utsname;
struct user_msghdr;
struct nfsctl_arg;
struct sched_attr;
struct list_head;
struct semaphore;
union bpf_attr;
struct io_event;
struct rlimit64;
struct statfs64;
struct mmsghdr;
struct msgbuf;
struct stat64;
struct iattr;
struct inode;
struct iocb;

struct __user_cap_header_struct {__u32 version;int pid;};
struct __user_cap_data_struct {__u32 effective;__u32 permitted;__u32 inheritable;};
struct __old_kernel_stat;
typedef struct __user_cap_header_struct *cap_user_header_t;
typedef unsigned int __kernel_ulong_t;
struct old_linux_dirent;
struct robust_list_head;
typedef struct __user_cap_data_struct *cap_user_data_t;
struct mmap_arg_struct;
struct perf_event_attr;
struct compat_timeval;
struct linux_dirent64;
struct oldold_utsname;
struct sel_arg_struct;
struct kexec_segment;
struct getcpu_cache;
typedef int32_t key_serial_t;
struct linux_dirent;
typedef unsigned int old_sigset_t;
enum MACRO___ARM {__ARM_NR_breakpoint = 0xF0001,__ARM_NR_cacheflush = 0xF0002,__ARM_NR_usr26 = 0xF0003,__ARM_NR_usr32 = 0xF0004,__ARM_NR_set_tls = 0xF0005,};
struct compat_stat;
struct file_handle;
struct new_utsname;
struct old_utsname;
struct user_msghdr;
enum MACRO___NR {__NR_restart_syscall = 0,__NR_exit = 1,__NR_fork = 2,__NR_read = 3,__NR_write = 4,__NR_open = 5,__NR_close = 6,__NR_creat = 8,__NR_link = 9,__NR_unlink = 10,__NR_execve = 11,__NR_chdir = 12,__NR_mknod = 14,__NR_chmod = 15,__NR_lchown = 16,__NR_lseek = 19,__NR_getpid = 20,__NR_mount = 21,__NR_setuid = 23,__NR_getuid = 24,__NR_ptrace = 26,__NR_pause = 29,__NR_access = 33,__NR_nice = 34,__NR_sync = 36,__NR_kill = 37,__NR_rename = 38,__NR_mkdir = 39,__NR_rmdir = 40,__NR_dup = 41,__NR_pipe = 42,__NR_times = 43,__NR_brk = 45,__NR_setgid = 46,__NR_getgid = 47,__NR_geteuid = 49,__NR_getegid = 50,__NR_acct = 51,__NR_umount2 = 52,__NR_ioctl = 54,__NR_fcntl = 55,__NR_setpgid = 57,__NR_umask = 60,__NR_chroot = 61,__NR_ustat = 62,__NR_dup2 = 63,__NR_getppid = 64,__NR_getpgrp = 65,__NR_setsid = 66,__NR_sigaction = 67,__NR_setreuid = 70,__NR_setregid = 71,__NR_sigsuspend = 72,__NR_sigpending = 73,__NR_sethostname = 74,__NR_setrlimit = 75,__NR_getrusage = 77,__NR_gettimeofday = 78,__NR_settimeofday = 79,__NR_getgroups = 80,__NR_setgroups = 81,__NR_symlink = 83,__NR_readlink = 85,__NR_uselib = 86,__NR_swapon = 87,__NR_reboot = 88,__NR_munmap = 91,__NR_truncate = 92,__NR_ftruncate = 93,__NR_fchmod = 94,__NR_fchown = 95,__NR_getpriority = 96,__NR_setpriority = 97,__NR_statfs = 99,__NR_fstatfs = 100,__NR_syslog = 103,__NR_setitimer = 104,__NR_getitimer = 105,__NR_stat = 106,__NR_lstat = 107,__NR_fstat = 108,__NR_vhangup = 111,__NR_wait4 = 114,__NR_swapoff = 115,__NR_sysinfo = 116,__NR_fsync = 118,__NR_sigreturn = 119,__NR_clone = 120,__NR_setdomainname = 121,__NR_uname = 122,__NR_adjtimex = 124,__NR_mprotect = 125,__NR_sigprocmask = 126,__NR_init_module = 128,__NR_delete_module = 129,__NR_quotactl = 131,__NR_getpgid = 132,__NR_fchdir = 133,__NR_bdflush = 134,__NR_sysfs = 135,__NR_personality = 136,__NR_setfsuid = 138,__NR_setfsgid = 139,__NR__llseek = 140,__NR_getdents = 141,__NR__newselect = 142,__NR_flock = 143,__NR_msync = 144,__NR_readv = 145,__NR_writev = 146,__NR_getsid = 147,__NR_fdatasync = 148,__NR__sysctl = 149,__NR_mlock = 150,__NR_munlock = 151,__NR_mlockall = 152,__NR_munlockall = 153,__NR_sched_setparam = 154,__NR_sched_getparam = 155,__NR_sched_setscheduler = 156,__NR_sched_getscheduler = 157,__NR_sched_yield = 158,__NR_sched_get_priority_max = 159,__NR_sched_get_priority_min = 160,__NR_sched_rr_get_interval = 161,__NR_nanosleep = 162,__NR_mremap = 163,__NR_setresuid = 164,__NR_getresuid = 165,__NR_poll = 168,__NR_nfsservctl = 169,__NR_setresgid = 170,__NR_getresgid = 171,__NR_prctl = 172,__NR_rt_sigreturn = 173,__NR_rt_sigaction = 174,__NR_rt_sigprocmask = 175,__NR_rt_sigpending = 176,__NR_rt_sigtimedwait = 177,__NR_rt_sigqueueinfo = 178,__NR_rt_sigsuspend = 179,__NR_pread64 = 180,__NR_pwrite64 = 181,__NR_chown = 182,__NR_getcwd = 183,__NR_capget = 184,__NR_capset = 185,__NR_sigaltstack = 186,__NR_sendfile = 187,__NR_vfork = 190,__NR_ugetrlimit = 191,__NR_mmap2 = 192,__NR_truncate64 = 193,__NR_ftruncate64 = 194,__NR_stat64 = 195,__NR_lstat64 = 196,__NR_fstat64 = 197,__NR_lchown32 = 198,__NR_getuid32 = 199,__NR_getgid32 = 200,__NR_geteuid32 = 201,__NR_getegid32 = 202,__NR_setreuid32 = 203,__NR_setregid32 = 204,__NR_getgroups32 = 205,__NR_setgroups32 = 206,__NR_fchown32 = 207,__NR_setresuid32 = 208,__NR_getresuid32 = 209,__NR_setresgid32 = 210,__NR_getresgid32 = 211,__NR_chown32 = 212,__NR_setuid32 = 213,__NR_setgid32 = 214,__NR_setfsuid32 = 215,__NR_setfsgid32 = 216,__NR_getdents64 = 217,__NR_pivot_root = 218,__NR_mincore = 219,__NR_madvise = 220,__NR_fcntl64 = 221,__NR_gettid = 224,__NR_readahead = 225,__NR_setxattr = 226,__NR_lsetxattr = 227,__NR_fsetxattr = 228,__NR_getxattr = 229,__NR_lgetxattr = 230,__NR_fgetxattr = 231,__NR_listxattr = 232,__NR_llistxattr = 233,__NR_flistxattr = 234,__NR_removexattr = 235,__NR_lremovexattr = 236,__NR_fremovexattr = 237,__NR_tkill = 238,__NR_sendfile64 = 239,__NR_futex = 240,__NR_sched_setaffinity = 241,__NR_sched_getaffinity = 242,__NR_io_setup = 243,__NR_io_destroy = 244,__NR_io_getevents = 245,__NR_io_submit = 246,__NR_io_cancel = 247,__NR_exit_group = 248,__NR_lookup_dcookie = 249,__NR_epoll_create = 250,__NR_epoll_ctl = 251,__NR_epoll_wait = 252,__NR_remap_file_pages = 253,__NR_set_tid_address = 256,__NR_timer_create = 257,__NR_timer_settime = 258,__NR_timer_gettime = 259,__NR_timer_getoverrun = 260,__NR_timer_delete = 261,__NR_clock_settime = 262,__NR_clock_gettime = 263,__NR_clock_getres = 264,__NR_clock_nanosleep = 265,__NR_statfs64 = 266,__NR_fstatfs64 = 267,__NR_tgkill = 268,__NR_utimes = 269,__NR_fadvise64_64 = 270,__NR_pciconfig_iobase = 271,__NR_pciconfig_read = 272,__NR_pciconfig_write = 273,__NR_mq_open = 274,__NR_mq_unlink = 275,__NR_mq_timedsend = 276,__NR_mq_timedreceive = 277,__NR_mq_notify = 278,__NR_mq_getsetattr = 279,__NR_waitid = 280,__NR_socket = 281,__NR_bind = 282,__NR_connect = 283,__NR_listen = 284,__NR_accept = 285,__NR_getsockname = 286,__NR_getpeername = 287,__NR_socketpair = 288,__NR_send = 289,__NR_sendto = 290,__NR_recv = 291,__NR_recvfrom = 292,__NR_shutdown = 293,__NR_setsockopt = 294,__NR_getsockopt = 295,__NR_sendmsg = 296,__NR_recvmsg = 297,__NR_semop = 298,__NR_semget = 299,__NR_semctl = 300,__NR_msgsnd = 301,__NR_msgrcv = 302,__NR_msgget = 303,__NR_msgctl = 304,__NR_shmat = 305,__NR_shmdt = 306,__NR_shmget = 307,__NR_shmctl = 308,__NR_add_key = 309,__NR_request_key = 310,__NR_keyctl = 311,__NR_semtimedop = 312,__NR_vserver = 313,__NR_ioprio_set = 314,__NR_ioprio_get = 315,__NR_inotify_init = 316,__NR_inotify_add_watch = 317,__NR_inotify_rm_watch = 318,__NR_mbind = 319,__NR_get_mempolicy = 320,__NR_set_mempolicy = 321,__NR_openat = 322,__NR_mkdirat = 323,__NR_mknodat = 324,__NR_fchownat = 325,__NR_futimesat = 326,__NR_fstatat64 = 327,__NR_unlinkat = 328,__NR_renameat = 329,__NR_linkat = 330,__NR_symlinkat = 331,__NR_readlinkat = 332,__NR_fchmodat = 333,__NR_faccessat = 334,__NR_pselect6 = 335,__NR_ppoll = 336,__NR_unshare = 337,__NR_set_robust_list = 338,__NR_get_robust_list = 339,__NR_splice = 340,__NR_sync_file_range2 = 341,__NR_tee = 342,__NR_vmsplice = 343,__NR_move_pages = 344,__NR_getcpu = 345,__NR_epoll_pwait = 346,__NR_kexec_load = 347,__NR_utimensat = 348,__NR_signalfd = 349,__NR_timerfd_create = 350,__NR_eventfd = 351,__NR_fallocate = 352,__NR_timerfd_settime = 353,__NR_timerfd_gettime = 354,__NR_signalfd4 = 355,__NR_eventfd2 = 356,__NR_epoll_create1 = 357,__NR_dup3 = 358,__NR_pipe2 = 359,__NR_inotify_init1 = 360,__NR_preadv = 361,__NR_pwritev = 362,__NR_rt_tgsigqueueinfo = 363,__NR_perf_event_open = 364,__NR_recvmmsg = 365,__NR_accept4 = 366,__NR_fanotify_init = 367,__NR_fanotify_mark = 368,__NR_prlimit64 = 369,__NR_name_to_handle_at = 370,__NR_open_by_handle_at = 371,__NR_clock_adjtime = 372,__NR_syncfs = 373,__NR_sendmmsg = 374,__NR_setns = 375,__NR_process_vm_readv = 376,__NR_process_vm_writev = 377,__NR_kcmp = 378,__NR_finit_module = 379,__NR_sched_setattr = 380,__NR_sched_getattr = 381,__NR_renameat2 = 382,__NR_seccomp = 383,__NR_getrandom = 384,__NR_memfd_create = 385,__NR_bpf = 386,__NR_execveat = 387,__NR_userfaultfd = 388,__NR_membarrier = 389,__NR_mlock2 = 390,__NR_copy_file_range = 391,__NR_preadv2 = 392,__NR_pwritev2 = 393,__NR_time = 13,__NR_umount = 22,__NR_stime = 25,__NR_alarm = 27,__NR_utime = 30,__NR_getrlimit = 76,__NR_select = 82,__NR_readdir = 89,__NR_mmap = 90,__NR_socketcall = 102,__NR_syscall = 113,__NR_ipc = 117,};
struct nfsctl_arg;
struct sched_attr;
enum MACRO_SYS {SYS_restart_syscall = 0,SYS_exit = 1,SYS_fork = 2,SYS_read = 3,SYS_write = 4,SYS_open = 5,SYS_close = 6,SYS_creat = 8,SYS_link = 9,SYS_unlink = 10,SYS_execve = 11,SYS_chdir = 12,SYS_mknod = 14,SYS_chmod = 15,SYS_lchown = 16,SYS_lseek = 19,SYS_getpid = 20,SYS_mount = 21,SYS_setuid = 23,SYS_getuid = 24,SYS_ptrace = 26,SYS_pause = 29,SYS_access = 33,SYS_nice = 34,SYS_sync = 36,SYS_kill = 37,SYS_rename = 38,SYS_mkdir = 39,SYS_rmdir = 40,SYS_dup = 41,SYS_pipe = 42,SYS_times = 43,SYS_brk = 45,SYS_setgid = 46,SYS_getgid = 47,SYS_geteuid = 49,SYS_getegid = 50,SYS_acct = 51,SYS_umount2 = 52,SYS_ioctl = 54,SYS_fcntl = 55,SYS_setpgid = 57,SYS_umask = 60,SYS_chroot = 61,SYS_ustat = 62,SYS_dup2 = 63,SYS_getppid = 64,SYS_getpgrp = 65,SYS_setsid = 66,SYS_sigaction = 67,SYS_setreuid = 70,SYS_setregid = 71,SYS_sigsuspend = 72,SYS_sigpending = 73,SYS_sethostname = 74,SYS_setrlimit = 75,SYS_getrusage = 77,SYS_gettimeofday = 78,SYS_settimeofday = 79,SYS_getgroups = 80,SYS_setgroups = 81,SYS_symlink = 83,SYS_readlink = 85,SYS_uselib = 86,SYS_swapon = 87,SYS_reboot = 88,SYS_munmap = 91,SYS_truncate = 92,SYS_ftruncate = 93,SYS_fchmod = 94,SYS_fchown = 95,SYS_getpriority = 96,SYS_setpriority = 97,SYS_statfs = 99,SYS_fstatfs = 100,SYS_syslog = 103,SYS_setitimer = 104,SYS_getitimer = 105,SYS_stat = 106,SYS_lstat = 107,SYS_fstat = 108,SYS_vhangup = 111,SYS_wait4 = 114,SYS_swapoff = 115,SYS_sysinfo = 116,SYS_fsync = 118,SYS_sigreturn = 119,SYS_clone = 120,SYS_setdomainname = 121,SYS_uname = 122,SYS_adjtimex = 124,SYS_mprotect = 125,SYS_sigprocmask = 126,SYS_init_module = 128,SYS_delete_module = 129,SYS_quotactl = 131,SYS_getpgid = 132,SYS_fchdir = 133,SYS_bdflush = 134,SYS_sysfs = 135,SYS_personality = 136,SYS_setfsuid = 138,SYS_setfsgid = 139,SYS__llseek = 140,SYS_getdents = 141,SYS__newselect = 142,SYS_flock = 143,SYS_msync = 144,SYS_readv = 145,SYS_writev = 146,SYS_getsid = 147,SYS_fdatasync = 148,SYS__sysctl = 149,SYS_mlock = 150,SYS_munlock = 151,SYS_mlockall = 152,SYS_munlockall = 153,SYS_sched_setparam = 154,SYS_sched_getparam = 155,SYS_sched_setscheduler = 156,SYS_sched_getscheduler = 157,SYS_sched_yield = 158,SYS_sched_get_priority_max = 159,SYS_sched_get_priority_min = 160,SYS_sched_rr_get_interval = 161,SYS_nanosleep = 162,SYS_mremap = 163,SYS_setresuid = 164,SYS_getresuid = 165,SYS_poll = 168,SYS_nfsservctl = 169,SYS_setresgid = 170,SYS_getresgid = 171,SYS_prctl = 172,SYS_rt_sigreturn = 173,SYS_rt_sigaction = 174,SYS_rt_sigprocmask = 175,SYS_rt_sigpending = 176,SYS_rt_sigtimedwait = 177,SYS_rt_sigqueueinfo = 178,SYS_rt_sigsuspend = 179,SYS_pread64 = 180,SYS_pwrite64 = 181,SYS_chown = 182,SYS_getcwd = 183,SYS_capget = 184,SYS_capset = 185,SYS_sigaltstack = 186,SYS_sendfile = 187,SYS_vfork = 190,SYS_ugetrlimit = 191,SYS_mmap2 = 192,SYS_truncate64 = 193,SYS_ftruncate64 = 194,SYS_stat64 = 195,SYS_lstat64 = 196,SYS_fstat64 = 197,SYS_lchown32 = 198,SYS_getuid32 = 199,SYS_getgid32 = 200,SYS_geteuid32 = 201,SYS_getegid32 = 202,SYS_setreuid32 = 203,SYS_setregid32 = 204,SYS_getgroups32 = 205,SYS_setgroups32 = 206,SYS_fchown32 = 207,SYS_setresuid32 = 208,SYS_getresuid32 = 209,SYS_setresgid32 = 210,SYS_getresgid32 = 211,SYS_chown32 = 212,SYS_setuid32 = 213,SYS_setgid32 = 214,SYS_setfsuid32 = 215,SYS_setfsgid32 = 216,SYS_getdents64 = 217,SYS_pivot_root = 218,SYS_mincore = 219,SYS_madvise = 220,SYS_fcntl64 = 221,SYS_gettid = 224,SYS_readahead = 225,SYS_setxattr = 226,SYS_lsetxattr = 227,SYS_fsetxattr = 228,SYS_getxattr = 229,SYS_lgetxattr = 230,SYS_fgetxattr = 231,SYS_listxattr = 232,SYS_llistxattr = 233,SYS_flistxattr = 234,SYS_removexattr = 235,SYS_lremovexattr = 236,SYS_fremovexattr = 237,SYS_tkill = 238,SYS_sendfile64 = 239,SYS_futex = 240,SYS_sched_setaffinity = 241,SYS_sched_getaffinity = 242,SYS_io_setup = 243,SYS_io_destroy = 244,SYS_io_getevents = 245,SYS_io_submit = 246,SYS_io_cancel = 247,SYS_exit_group = 248,SYS_lookup_dcookie = 249,SYS_epoll_create = 250,SYS_epoll_ctl = 251,SYS_epoll_wait = 252,SYS_remap_file_pages = 253,SYS_set_tid_address = 256,SYS_timer_create = 257,SYS_timer_settime = 258,SYS_timer_gettime = 259,SYS_timer_getoverrun = 260,SYS_timer_delete = 261,SYS_clock_settime = 262,SYS_clock_gettime = 263,SYS_clock_getres = 264,SYS_clock_nanosleep = 265,SYS_statfs64 = 266,SYS_fstatfs64 = 267,SYS_tgkill = 268,SYS_utimes = 269,SYS_fadvise64_64 = 270,SYS_pciconfig_iobase = 271,SYS_pciconfig_read = 272,SYS_pciconfig_write = 273,SYS_mq_open = 274,SYS_mq_unlink = 275,SYS_mq_timedsend = 276,SYS_mq_timedreceive = 277,SYS_mq_notify = 278,SYS_mq_getsetattr = 279,SYS_waitid = 280,SYS_socket = 281,SYS_bind = 282,SYS_connect = 283,SYS_listen = 284,SYS_accept = 285,SYS_getsockname = 286,SYS_getpeername = 287,SYS_socketpair = 288,SYS_send = 289,SYS_sendto = 290,SYS_recv = 291,SYS_recvfrom = 292,SYS_shutdown = 293,SYS_setsockopt = 294,SYS_getsockopt = 295,SYS_sendmsg = 296,SYS_recvmsg = 297,SYS_semop = 298,SYS_semget = 299,SYS_semctl = 300,SYS_msgsnd = 301,SYS_msgrcv = 302,SYS_msgget = 303,SYS_msgctl = 304,SYS_shmat = 305,SYS_shmdt = 306,SYS_shmget = 307,SYS_shmctl = 308,SYS_add_key = 309,SYS_request_key = 310,SYS_keyctl = 311,SYS_semtimedop = 312,SYS_vserver = 313,SYS_ioprio_set = 314,SYS_ioprio_get = 315,SYS_inotify_init = 316,SYS_inotify_add_watch = 317,SYS_inotify_rm_watch = 318,SYS_mbind = 319,SYS_get_mempolicy = 320,SYS_set_mempolicy = 321,SYS_openat = 322,SYS_mkdirat = 323,SYS_mknodat = 324,SYS_fchownat = 325,SYS_futimesat = 326,SYS_fstatat64 = 327,SYS_unlinkat = 328,SYS_renameat = 329,SYS_linkat = 330,SYS_symlinkat = 331,SYS_readlinkat = 332,SYS_fchmodat = 333,SYS_faccessat = 334,SYS_pselect6 = 335,SYS_ppoll = 336,SYS_unshare = 337,SYS_set_robust_list = 338,SYS_get_robust_list = 339,SYS_splice = 340,SYS_sync_file_range2 = 341,SYS_tee = 342,SYS_vmsplice = 343,SYS_move_pages = 344,SYS_getcpu = 345,SYS_epoll_pwait = 346,SYS_kexec_load = 347,SYS_utimensat = 348,SYS_signalfd = 349,SYS_timerfd_create = 350,SYS_eventfd = 351,SYS_fallocate = 352,SYS_timerfd_settime = 353,SYS_timerfd_gettime = 354,SYS_signalfd4 = 355,SYS_eventfd2 = 356,SYS_epoll_create1 = 357,SYS_dup3 = 358,SYS_pipe2 = 359,SYS_inotify_init1 = 360,SYS_preadv = 361,SYS_pwritev = 362,SYS_rt_tgsigqueueinfo = 363,SYS_perf_event_open = 364,SYS_recvmmsg = 365,SYS_accept4 = 366,SYS_fanotify_init = 367,SYS_fanotify_mark = 368,SYS_prlimit64 = 369,SYS_name_to_handle_at = 370,SYS_open_by_handle_at = 371,SYS_clock_adjtime = 372,SYS_syncfs = 373,SYS_sendmmsg = 374,SYS_setns = 375,SYS_process_vm_readv = 376,SYS_process_vm_writev = 377,SYS_kcmp = 378,SYS_finit_module = 379,SYS_sched_setattr = 380,SYS_sched_getattr = 381,SYS_renameat2 = 382,SYS_seccomp = 383,SYS_getrandom = 384,SYS_memfd_create = 385,SYS_bpf = 386,SYS_execveat = 387,SYS_userfaultfd = 388,SYS_membarrier = 389,SYS_mlock2 = 390,SYS_copy_file_range = 391,SYS_preadv2 = 392,SYS_pwritev2 = 393,SYS_time = 13,SYS_umount = 22,SYS_stime = 25,SYS_alarm = 27,SYS_utime = 30,SYS_getrlimit = 76,SYS_select = 82,SYS_readdir = 89,SYS_mmap = 90,SYS_socketcall = 102,SYS_syscall = 113,SYS_ipc = 117,};
struct list_head;
struct semaphore;
union bpf_attr;
struct io_event;
struct rlimit64;
struct statfs64;
struct mmsghdr;
struct msgbuf;
struct stat64;
struct iattr;
struct inode;
typedef __kernel_uid32_t qid_t;
struct iocb;
typedef unsigned int u32;
typedef unsigned __int64 u64;
typedef __kernel_ulong_t aio_context_t;



#endif
